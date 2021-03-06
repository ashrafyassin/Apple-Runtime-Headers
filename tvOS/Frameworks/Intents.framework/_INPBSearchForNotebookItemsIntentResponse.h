//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForNotebookItemsIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchForNotebookItemsIntentResponse : PBCodable <_INPBSearchForNotebookItemsIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int sortType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _sortType;
    NSArray *_notes;
    NSArray *_taskLists;
    NSArray *_tasks;
}

+ (_Bool)supportsSecureCoding;
+ (Class)tasksType;
+ (Class)taskListsType;
+ (Class)notesType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(copy, nonatomic) NSArray *taskLists; // @synthesize taskLists=_taskLists;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) NSArray *notes; // @synthesize notes=_notes;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)tasksAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long tasksCount;
- (void)addTasks:(id)arg1;
- (void)clearTasks;
- (id)taskListsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long taskListsCount;
- (void)addTaskLists:(id)arg1;
- (void)clearTaskLists;
- (int)StringAsSortType:(id)arg1;
- (id)sortTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSortType;
- (id)notesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long notesCount;
- (void)addNotes:(id)arg1;
- (void)clearNotes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

