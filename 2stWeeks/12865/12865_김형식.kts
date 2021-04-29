import java.io.*
import java.util.*

fun main(){
    val br = BufferedReader(InputStreamReader(System.`in`))

    var st: StringTokenizer = StringTokenizer(br.readLine())

    val N = st.nextToken().toInt()  // 물품 수
    val K = st.nextToken().toInt()  // 버틸 수 있는 무게

    val W = IntArray(N+1)
    val V = IntArray(N+1)

    val DP = Array<IntArray>(N+1) { IntArray(K+1){0} }

    for(i in 1..N){
       st = StringTokenizer(br.readLine())
       W[i] = st.nextToken().toInt()    // 무게
       V[i] = st.nextToken().toInt()    // 가치
   }

    for(i in 1..N){
        for(j in 0..K){
            DP[i][j] = DP[i-1][j]
            if(W[i] <= j){
                DP[i][j] = Math.max(DP[i][j], DP[i-1][j-W[i]] + V[i])
            }
        }
    }

    println(DP[N][K])
}