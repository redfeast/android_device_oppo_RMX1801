f=open('proprietary-files.txt')
o=open('copy_proprietary.sh','w')
o.write('#!/bin/bash\n')
vendor='/home/redfeast/sources/havoc/vendor/oppo/RMX1801/proprietary/'
system='/home/redfeast/mounted/system/'
for each in f:
	if '/' in each:

			print(each[:-1])
			var=each[:-1]
			t=var.split('/')
			print(t)
			print(len(t))
			j=0
			path=''
			while j<(len(t)-1):
					path=path+t[j]+'/'
					print(j)
					j+=1
			print(path)
			o.write('mkdir -p '+vendor+path+' && cp '+system+var+' '+vendor+path+'\n')
f.close()
o.close()
