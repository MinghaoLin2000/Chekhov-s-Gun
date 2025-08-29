-[Browse_Entity hash]
unsigned __int64 __cdecl -[Browse_Entity hash](Browse_Entity *self, SEL a2)
{
  id v2; // x19
  void *v3; // x20

  v2 = objc_retainAutoreleasedReturnValue(-[Browse_Entity browseInfo](self, "browseInfo"));
  v3 = objc_msgSend(v2, "hash");
  objc_release(v2);
  return (unsigned __int64)v3;
}