//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSCPaginationItem : NSObject
{
    _Bool _isTimestampEnable;
    int _pageSize;
    int _reallyCurpage;
    int _curPage;
    unsigned long long _timestamp;
    unsigned long long _afterTimestamp;
    unsigned long long _beforTimestamp;
    unsigned long long _id;
    _Bool _useTimesatmpAsReference;
    int _direction;
    int _paginationType;
    int _paginationTimestamp;
}

@property(nonatomic) _Bool useTimesatmpAsReference; // @synthesize useTimesatmpAsReference=_useTimesatmpAsReference;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int paginationTimestamp; // @synthesize paginationTimestamp=_paginationTimestamp;
@property(nonatomic) int paginationType; // @synthesize paginationType=_paginationType;
@property(nonatomic) _Bool isTimestampEnable; // @synthesize isTimestampEnable=_isTimestampEnable;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
@property(nonatomic) unsigned long long beforTimestamp; // @synthesize beforTimestamp=_beforTimestamp;
@property(nonatomic) unsigned long long afterTimestamp; // @synthesize afterTimestamp=_afterTimestamp;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) int reallyCurpage; // @synthesize reallyCurpage=_reallyCurpage;
@property(nonatomic) int curPage; // @synthesize curPage=_curPage;
- (void)setPagination:(id)arg1;
- (void)paginationPlus;
- (long long)currentPageNums;
- (void)reset;
- (id)init;

@end
