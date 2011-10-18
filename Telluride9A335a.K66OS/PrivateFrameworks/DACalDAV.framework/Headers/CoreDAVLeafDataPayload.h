/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "NSObject.h"

@class NSString, NSArray, NSData, NSURL;

@protocol CoreDAVLeafDataPayload <NSObject>
@optional
@property(readonly, assign) NSArray *childrenOrder;
@required
@property(readonly, assign) NSData *dataPayload;
@property(retain) NSURL *serverID;
@property(readonly, assign) NSString *syncKey;
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;
@optional
// declared property getter: - (id)childrenOrder;
@required
// declared property getter: - (id)dataPayload;
// declared property getter: - (id)serverID;
// declared property setter: - (void)setServerID:(id)anId;
// declared property getter: - (id)syncKey;
@end

