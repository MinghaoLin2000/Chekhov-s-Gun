_$s16EyeCandyGraphics9CGSWindowV7addTags_10connectionySo06WindowF0V_AA13CGSConnectionVtF
Swift::Void __swiftcall CGSWindow.addTags(_:connection:)(__C::WindowTags _, EyeCandyGraphics::CGSConnection connection)
{
  int v2; // w2
  _DWORD v3[5]; // [xsp+0h] [xbp-30h] BYREF
  int v4; // [xsp+14h] [xbp-1Ch]

  v3[4] = connection.cid;
  v4 = v2;
  WindowTags.asUnsafePointer<A>(_:)((_QWORD *)_.rawValue, sub_10001B18C, v3, _.rawValue, &type metadata for () + 1);
}