//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SongforSingerImageDB : NSObject
{
}

+ (_Bool)UpdateAuthorIDWithSingerName:(id)arg1 WithAuthorID:(int)arg2;
+ (_Bool)UpdateAuthorIDWithSongID:(unsigned long long)arg1 WithAuthorID:(int)arg2;
+ (_Bool)DeleteAllRecordfromDB;
+ (_Bool)RemoveTheRecordWithSingerName:(id)arg1;
+ (_Bool)RemoveTheRecordWithAuthorID:(int)arg1;
+ (_Bool)RemoveTheRecordWithSongID:(unsigned long long)arg1;
+ (_Bool)ChangeTheRecordWithSongID:(unsigned long long)arg1 WithNewSingerName:(id)arg2;
+ (_Bool)SavingTheRecordWithNewSongID:(unsigned long long)arg1 WithSingerName:(id)arg2 WithAuthorID:(int)arg3;
+ (_Bool)ChangeTheAuthorIDWithSongID:(unsigned long long)arg1 AuthorID:(int)arg2;
+ (int)CheckingTheAuthorIDWithSongID:(unsigned long long)arg1;
+ (id)CheckingtheRecordWithAuthorID:(int)arg1;
+ (id)CheckingRecordsArrayWithAuthorID:(int)arg1;
+ (id)CheckingRecordsArrayWithSongID:(unsigned long long)arg1;
+ (id)CheckingRecordsWithSingerName:(id)arg1;
+ (id)CheckingtheRecordWithSongID:(unsigned long long)arg1;
+ (_Bool)isHasTheRecordforAuthor:(int)arg1;
+ (_Bool)isHasTheRecordforSingerName:(id)arg1;
+ (_Bool)isHasTheRecordforSongID:(unsigned long long)arg1;

@end

