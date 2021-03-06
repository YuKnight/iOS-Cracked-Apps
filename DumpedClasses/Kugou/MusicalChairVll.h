//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "interviewMusicalChairsDelegate.h"

@class KGLiveInterviewMusicalChairVM, NSString, interviewMusicalChairs;

@interface MusicalChairVll : NSObject <interviewMusicalChairsDelegate>
{
    int _type;
    interviewMusicalChairs *_chairView;
    id <MusicalChairVllDelegate> _delegate;
    KGLiveInterviewMusicalChairVM *_model;
    long long _roomId;
    long long _seatId;
    KGLiveInterviewMusicalChairVM *_chairVM;
    long long _concertId;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long concertId; // @synthesize concertId=_concertId;
@property(retain, nonatomic) KGLiveInterviewMusicalChairVM *chairVM; // @synthesize chairVM=_chairVM;
@property(nonatomic) long long seatId; // @synthesize seatId=_seatId;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) KGLiveInterviewMusicalChairVM *model; // @synthesize model=_model;
@property(nonatomic) __weak id <MusicalChairVllDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) interviewMusicalChairs *chairView; // @synthesize chairView=_chairView;
- (void).cxx_destruct;
- (void)selectedWithSeatId:(long long)arg1 giftNum:(int)arg2 atIndexPath:(id)arg3;
- (void)grabSeatWithTickNum:(long long)arg1 atIndexPath:(id)arg2;
- (void)getMusicalChairInfoIndexPath:(id)arg1;
- (void)getMusicalChairInfo;
- (void)installVM;
- (void)installView;
- (id)initWithconcertId:(long long)arg1 concertType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

