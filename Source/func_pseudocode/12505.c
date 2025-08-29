-[NSThread tsu_qualityOfServiceClass]
unsigned int __cdecl -[NSThread tsu_qualityOfServiceClass](NSThread *self, SEL a2)
{
  NSQualityOfService v2; // x0
  int v3; // w10
  int v4; // w9
  unsigned int v5; // w8
  int v6; // w10
  unsigned int v7; // w9

  v2 = -[NSThread qualityOfService](self, "qualityOfService");
  if ( v2 == NSQualityOfServiceUserInteractive )
    v3 = 33;
  else
    v3 = 0;
  if ( v2 == NSQualityOfServiceUserInitiated )
    v4 = 25;
  else
    v4 = v3;
  if ( v2 == NSQualityOfServiceUtility )
    v5 = 17;
  else
    v5 = v4;
  if ( v2 == NSQualityOfServiceBackground )
    v6 = 9;
  else
    v6 = 0;
  if ( v2 == NSQualityOfServiceDefault )
    v7 = 21;
  else
    v7 = v6;
  if ( v2 <= 16 )
    return v7;
  else
    return v5;
}