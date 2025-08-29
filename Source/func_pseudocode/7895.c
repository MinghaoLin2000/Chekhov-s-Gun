_$sSo10WindowTagsV16EyeCandyGraphicsE20descriptionKeyValuesSayAB_s12StaticStringVtGvgZ
__int64 static WindowTags.descriptionKeyValues.getter()
{
  __int64 v0; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_10002AE70 != -1 )
    swift_once(&qword_10002AE70, sub_10001B558);
  v0 = static WindowTags.descriptionKeyValues;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return swift_bridgeObjectRetain(v0);
}