//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap;

@interface CDownloadVideoInfo : NSObject
{
    CMessageWrap *m_wrapMsg;
    unsigned long long m_ui64StartTime;
    unsigned int m_uiOpType;
    int m_nRetCode;
}

@property(nonatomic) int m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned int m_uiOpType; // @synthesize m_uiOpType;
@property(nonatomic) unsigned long long m_ui64StartTime; // @synthesize m_ui64StartTime;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (void).cxx_destruct;
- (id)GetStatInfo;
- (id)init;

@end

