//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSArray, NSString;

@interface NMMyPlayListDelRequest : NMBaseRequest
{
    NSString *_listId;
    _Bool _needDeleteFile;
    NSArray *_songIds;
}

@property(nonatomic) _Bool needDeleteFile; // @synthesize needDeleteFile=_needDeleteFile;
@property(retain, nonatomic) NSArray *songIds; // @synthesize songIds=_songIds;
@property(readonly, nonatomic) NSString *listId; // @synthesize listId=_listId;
- (void).cxx_destruct;
- (id)initWithListId:(id)arg1;

@end
