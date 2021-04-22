num1 = int(input())
num2 = int(input())

result = num1 * num2

while num2 > 0:
  temp = num2%10
  num2 = num2//10
  print(num1 * temp)

print(result)
