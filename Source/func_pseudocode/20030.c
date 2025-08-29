-[BonjourBrowse_Entity hash]
unsigned __int64 __cdecl -[BonjourBrowse_Entity hash](BonjourBrowse_Entity *self, SEL a2)
{
  id v2; // x19
  void *v3; // x20

  v2 = objc_retainAutoreleasedReturnValue(-[BonjourBrowse_Entity bonjourName](self, "bonjourName"));
  v3 = objc_msgSend(v2, "hash");
  objc_release(v2);
  return (unsigned __int64)v3;
}