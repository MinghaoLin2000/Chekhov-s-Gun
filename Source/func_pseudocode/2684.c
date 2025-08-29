-[AutofillNode isGeniusPlaylist]
bool __cdecl -[AutofillNode isGeniusPlaylist](AutofillNode *self, SEL a2)
{
  return (void *)-[AutofillNode kind](self, "kind") == (void *)2
      || (void *)-[AutofillNode kind](self, "kind") == (void *)4;
}