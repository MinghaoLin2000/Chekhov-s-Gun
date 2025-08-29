-[AutofillNode isSmartPlaylist]
bool __cdecl -[AutofillNode isSmartPlaylist](AutofillNode *self, SEL a2)
{
  return (void *)-[AutofillNode kind](self, "kind") == (void *)1;
}