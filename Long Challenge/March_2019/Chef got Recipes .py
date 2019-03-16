t=input()
while t:
    n=input()
    a=[]
    count=0
    c1=0
    c2=0
    for i in range(n):
        b=raw_input()
        a.append(b)
    for i in range(n):
        for j in range(i+1,n):
            cnct=a[i]+a[j]
            #print cnct
            if(cnct.find('a')!= -1 and cnct.find('e')!= -1 and cnct.find('i')!= -1 and cnct.find('o')!= -1 and  cnct.find('u')!= -1):
                c1=c1+1
                #print "c1 = "
                #print c1
            else:
                c2=c2+0
                #print "c2 = "
                #print c2
            #print "count = "
            count=c1+c2
            #print count
    print count
    
    t-=1
