/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequester.h> // Unknown library

@class NSThread;

__attribute__((visibility("hidden")))
@interface GeoQueryCollectionRequester : PBRequester {
@private
	NSThread *_thread;	// 96 = 0x60
}
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x30ce609d
- (void)_applicationDidEnterBackground:(id)_application;	// 0x30ce6009
- (void)_cancelSubmissionOnThread;	// 0x30ce5ff5
- (void)dealloc;	// 0x30ce6049
@end

