_$s16EyeCandyGraphics13CGSConnectionV8property6forKeyypSgSS_tF
void __usercall CGSConnection.property(forKey:)(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X2>, __int64 a4@<X8>)
{
  void *v6; // x21
  __int64 v7; // x20
  __int64 v8; // [xsp+0h] [xbp-30h] BYREF

  v8 = 0LL;
  v6 = (void *)sub_10001CAC0(a1, a2);
  LODWORD(a3) = CGSCopyConnectionProperty(a3, a3, v6, &v8);
  objc_release(v6);
  if ( (_DWORD)a3 || (v7 = v8) == 0 )
  {
    *(_OWORD *)a4 = 0u;
    *(_OWORD *)(a4 + 16) = 0u;
  }
  else
  {
    *(_QWORD *)(a4 + 24) = swift_getObjectType(v8);
    *(_QWORD *)a4 = v7;
  }
}