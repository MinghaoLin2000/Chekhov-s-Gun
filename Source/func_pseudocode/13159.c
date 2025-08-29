-[TSUWarning addAffectedObjects:]
void __cdecl -[TSUWarning addAffectedObjects:](TSUWarning *self, SEL a2, id a3)
{
  id v4; // x21
  id v5; // x0
  void *v6; // x20
  void *v7; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[TSUWarning affectedObjects](self, "affectedObjects"));
  v6 = v5;
  if ( v5 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "setByAddingObjectsFromSet:", v4));
    objc_release(v4);
    v4 = v7;
  }
  -[TSUWarning setAffectedObjects:](self, "setAffectedObjects:", v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}