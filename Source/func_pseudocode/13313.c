-[TSURangeList stringValue]
id __cdecl -[TSURangeList stringValue](TSURangeList *self, SEL a2)
{
  return +[TSURangeList stringValueForRangeVector:](
           &OBJC_CLASS___TSURangeList,
           "stringValueForRangeVector:",
           &self->mRangeList);
}