//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface TTQutoedCommentModel : JSONModel
{
    NSString *_commentID;
    NSString *_userName;
    NSString *_userID;
    NSString *_commentContent;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end
