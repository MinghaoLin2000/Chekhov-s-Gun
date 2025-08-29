-[TSPSnappyReadChannel initWithReadChannel:]
TSPSnappyReadChannel *__cdecl -[TSPSnappyReadChannel initWithReadChannel:](TSPSnappyReadChannel *self, SEL a2, id a3)
{
  id v5; // x19
  TSPSnappyReadChannel *v6; // x0
  TSPSnappyReadChannel *v7; // x21
  TSPSnappyReadChannel *v8; // x0
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___TSPSnappyReadChannel;
  v6 = -[TSPSnappyReadChannel init](&v10, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->_readChannel, a3);
    v8 = objc_retain(v7);
  }
  objc_release(v5);
  objc_release(v7);
  return v7;
}