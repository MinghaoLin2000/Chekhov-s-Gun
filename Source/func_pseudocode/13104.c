-[SFUFileDataRepresentation description]
id __cdecl -[SFUFileDataRepresentation description](SFUFileDataRepresentation *self, SEL a2)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<SFUFileDataRepresentation %p: path %@>"),
           self,
           self->mPath);
}