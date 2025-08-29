-[NotesImporter init]
NotesImporter *__cdecl -[NotesImporter init](NotesImporter *self, SEL a2)
{
  NotesImporter *v2; // x19
  ICEvernoteNoteParser *v3; // x0
  ICEvernoteNoteParser *evernoteNoteParser; // x8
  ICEvernoteContentParser *v5; // x0
  ICEvernoteContentParser *evernoteContentParser; // x8
  objc_super v8; // [xsp+0h] [xbp-20h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___NotesImporter;
  v2 = -[NotesImporter init](&v8, "init");
  if ( v2 )
  {
    v3 = (ICEvernoteNoteParser *)objc_alloc_init((Class)&OBJC_CLASS___ICEvernoteNoteParser);
    evernoteNoteParser = v2->_evernoteNoteParser;
    v2->_evernoteNoteParser = v3;
    objc_release(evernoteNoteParser);
    v5 = (ICEvernoteContentParser *)objc_alloc_init((Class)&OBJC_CLASS___ICEvernoteContentParser);
    evernoteContentParser = v2->_evernoteContentParser;
    v2->_evernoteContentParser = v5;
    objc_release(evernoteContentParser);
  }
  return v2;
}