##for debug comment out
import sys,atexit
from io import BytesIO
inp = BytesIO(sys.stdin.buffer.read())
input = lambda:inp.readline().decode('ascii')
buf = BytesIO()
#sys.stdout.write = lambda s: buf.write(s.encode('ascii'))
#print = lambda s: buf.write(s.encode('ascii'))
atexit.register(lambda:sys.__stdout__.buffer.write(buf.getvalue()))

