_$s16EyeCandyGraphics8CGSSpaceV4typeSo24CGSPackagesWorkspaceTypeVvg
__int64 __fastcall CGSSpace.type.getter(__int64 a1)
{
  unsigned int *v2; // x20

  v2 = (unsigned int *)CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_1000120F4();
  return CGSSpaceGetType(*v2, a1);
}