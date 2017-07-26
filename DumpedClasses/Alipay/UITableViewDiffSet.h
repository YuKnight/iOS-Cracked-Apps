//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet;

@interface UITableViewDiffSet : NSObject
{
    _Bool _singleDelete;
    unsigned long long _deleteCount;
    NSArray *_rowsToInsert;
    NSIndexSet *_sectionsToInsert;
    NSArray *_rowsToDelete;
    NSIndexSet *_sectionsToDelete;
}

+ (id)diffSetForSectionIndexArr:(id)arg1 SectionIndexDic:(id)arg2 SectionPointDic:(id)arg3 oldSectionIndexArr:(id)arg4 oldSectionIndexDic:(id)arg5 oldSectionPointDic:(id)arg6;
@property(nonatomic) _Bool singleDelete; // @synthesize singleDelete=_singleDelete;
@property(retain, nonatomic) NSIndexSet *sectionsToDelete; // @synthesize sectionsToDelete=_sectionsToDelete;
@property(retain, nonatomic) NSArray *rowsToDelete; // @synthesize rowsToDelete=_rowsToDelete;
@property(retain, nonatomic) NSIndexSet *sectionsToInsert; // @synthesize sectionsToInsert=_sectionsToInsert;
@property(retain, nonatomic) NSArray *rowsToInsert; // @synthesize rowsToInsert=_rowsToInsert;
@property(nonatomic) unsigned long long deleteCount; // @synthesize deleteCount=_deleteCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasUpdates;

@end
