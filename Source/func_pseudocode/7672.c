_$sSo17SLSTransactionRefa16EyeCandyGraphicsE25moveWindowsToManagedSpace_5spaceySayAC9CGSWindowVG_AC8CGSSpaceVtF
Swift::Void __swiftcall SLSTransactionRef.moveWindowsToManagedSpace(_:space:)(
        Swift::OpaquePointer _,
        EyeCandyGraphics::CGSSpace space)
{
  __int64 v2; // x20
  __int64 v3; // x19
  __int64 v5; // x22
  __int64 v6; // x0
  void *v7; // x20

  v3 = v2;
  v5 = sub_100002BF4(&unk_100029BE0);
  v6 = sub_100014D1C(&qword_100029BE8, &unk_100029BE0);
  v7 = (void *)Collection<>.cfarray.getter(v5, v6);
  SLSTransactionMoveWindowsToManagedSpace(v3, v7, space.spid);
  objc_release(v7);
}