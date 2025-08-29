-[ITLibrary hasMediaItemsForMediaKinds:]
bool __cdecl -[ITLibrary hasMediaItemsForMediaKinds:](ITLibrary *self, SEL a2, unsigned __int64 a3)
{
  void *v3; // x19
  bool v4; // w20

  v3 = objc_retainAutoreleasedReturnValue(-[ITLibrary allMediaItemsForMediaKinds:](self, "allMediaItemsForMediaKinds:", a3));
  v4 = objc_msgSend(v3, "count") != 0LL;
  objc_release(v3);
  return v4;
}