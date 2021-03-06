/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"
//
//#import "FBClassProvidable-Protocol.h"

@class FBRequester;

@interface FBLoginController : NSObject //<FBClassProvidable>
{
    //id <FBProvider> _requesterProvider;
    //id <FBAPISessionStore> _sessionStore;
    FBRequester *_requester;
    id _finishedBlock;
}

@property(copy, nonatomic) id finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(retain, nonatomic) FBRequester *requester; // @synthesize requester=_requester;
- (void)loginWithUsername:(id)arg1 credential:(id)arg2 credentialType:(int)arg3 finished:(id)arg4;
- (void)loginWithUsername:(id)arg1 password:(id)arg2 finished:(id)arg3;
- (void)requester:(id)arg1 didFinishWithResult:(id)arg2;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithRequesterProvider:(id)arg1 apiSessionStore:(id)arg2;
- (id)init;

@end

