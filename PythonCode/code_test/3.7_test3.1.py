#求10的因数

i=0
sum1=0
for i in range(10):
    if 10%(i+1)==0:
        print('10的因数%d'%(i+1))
        sum1=sum1+i+1
        print('累加和为%d'%(sum1))

#参考答案
i=1
result=''
total=0
while i<=10:
    if 10%i==0:
        result=result+str(i)+','
        total+=i
    i+=1
print('10的所有因数为%s因数累加和为%d'%(result,total))
