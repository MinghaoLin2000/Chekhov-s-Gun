-[SiriNCService _handleSpace]
bool __cdecl -[SiriNCService _handleSpace](SiriNCService *self, SEL a2)
{
  QLPreviewPanel *v2; // x20
  unsigned int v3; // w19

  if ( +[QLPreviewPanel sharedPreviewPanelExists](&OBJC_CLASS___QLPreviewPanel, "sharedPreviewPanelExists") )
  {
    v2 = objc_retainAutoreleasedReturnValue(+[QLPreviewPanel sharedPreviewPanel](&OBJC_CLASS___QLPreviewPanel, "sharedPreviewPanel"));
    v3 = (unsigned int)-[QLPreviewPanel isVisible](v2, "isVisible");
    if ( v3 )
      -[QLPreviewPanel close](v2, "close");
    objc_release(v2);
  }
  else
  {
    LOBYTE(v3) = 0;
  }
  return v3;
}