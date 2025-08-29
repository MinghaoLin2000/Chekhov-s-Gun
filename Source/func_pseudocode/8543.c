-[NotesImporter cleanupArchiveId:completionBlock:]
void __cdecl -[NotesImporter cleanupArchiveId:completionBlock:](NotesImporter *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v6)(_QWORD); // x19
  id v7; // x20
  ICEvernoteNoteParser *v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = (void (__fastcall **)(_QWORD))objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_retainAutoreleasedReturnValue(-[NotesImporter evernoteNoteParser](self, "evernoteNoteParser"));
  -[ICEvernoteNoteParser cleanupArchiveId:](v8, "cleanupArchiveId:", v7);
  objc_release(v7);
  objc_release(v8);
  if ( v6 )
    v6[2](v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}