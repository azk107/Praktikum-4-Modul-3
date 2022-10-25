a = int(input ())
detik = a % 60
menit = a//60
if(menit>=60): menit2 = menit % 60
else: menit2 = menit
jam = menit//60
if(jam>=24):
    jam2 = jam % 24
    hari = jam//24
    print("%d hari %.2d:%.2d:%.2d"%(hari,jam2,menit2,detik))
else:
    jam2=jam
    print("%.2d:%.2d:%.2d"%(jam2,menit2,detik))