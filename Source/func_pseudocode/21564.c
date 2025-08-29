_AudioFileCreateWithURL
OSStatus __cdecl AudioFileCreateWithURL(
        CFURLRef inFileRef,
        AudioFileTypeID inFileType,
        const AudioStreamBasicDescription *inFormat,
        AudioFileFlags inFlags,
        AudioFileID *outAudioFile)
{
  return _AudioFileCreateWithURL(inFileRef, inFileType, inFormat, inFlags, outAudioFile);
}