//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PencilKit/PKVersionedDocument.h>

@class PKDrawing;

@interface PKDrawingVersionedDocument : PKVersionedDocument
{
    _Bool _loadNonInkingStrokes;
    PKDrawing *_drawing;
}

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
- (void).cxx_destruct;
@property(nonatomic) _Bool loadNonInkingStrokes; // @synthesize loadNonInkingStrokes=_loadNonInkingStrokes;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)initWithDrawing:(id)arg1;
- (_Bool)loadUnzippedData:(id)arg1;

@end

