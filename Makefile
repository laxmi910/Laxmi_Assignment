#method 1:
all:
	gcc PLMN.c -o plmn
	gcc imsi.c -o imsi
	gcc gnb.c -o gnb
	gcc ue.c -o ue
clean:
	rm -rf *.o
