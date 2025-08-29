_$s16EyeCandyGraphics9CGSWindowV11getProperty6forKey10connectionyXlSgSS_AA13CGSConnectionVtF
__int64 __fastcall CGSWindow.getProperty(forKey:connection:)(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // x21
  __int64 v8; // [xsp+0h] [xbp-30h] BYREF

  v8 = 0LL;
  v6 = (void *)sub_10001CAC0(a1, a2);
  LODWORD(a4) = CGSCopyWindowProperty(a3, a4, v6, &v8);
  objc_release(v6);
  if ( (_DWORD)a4 )
    return 0LL;
  else
    return v8;
}