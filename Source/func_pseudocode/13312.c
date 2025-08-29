-[TSURangeList consolidate]
void __cdecl -[TSURangeList consolidate](TSURangeList *self, SEL a2)
{
  TSUNormalizeRangeVector(&self->mRangeList, a2);
}