//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>

@class CRDocument, CRSet, NSArray, NSMutableArray, NSString;

@interface CROrderedSet : NSObject <CRDataType, CRCoding>
{
    CRSet *_contents;
    NSMutableArray *_orderedArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *orderedArray; // @synthesize orderedArray=_orderedArray;
@property(retain, nonatomic) CRSet *contents; // @synthesize contents=_contents;
@property(readonly, copy) NSString *description;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (id)tombstone;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)mergeWithSet:(id)arg1;
- (void)mergeWith:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveObject:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)_indexForIndex:(unsigned long long)arg1;
- (void)_sort;
- (unsigned long long)indexOfObject:(id)arg1;
@property(readonly, copy) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (BOOL)containsObject:(id)arg1;
@property(nonatomic) __weak CRDocument *document;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

