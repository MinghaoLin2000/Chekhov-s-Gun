_$sSo11CGRegionRefa16EyeCandyGraphicsE5emptyABvgZ
id static CGRegionRef.empty.getter()
{
  void *v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_10002A510 != -1 )
    swift_once(&qword_10002A510, sub_100014D84);
  v0 = (void *)static CGRegionRef.empty;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retain(v0);
}