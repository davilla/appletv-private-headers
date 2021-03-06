/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ISOpenURLRequest;

__attribute__((visibility("hidden")))
@interface ISOpenURLOperation : ISOperation {
@private
	ISOpenURLRequest *_request;	// 60 = 0x3c
}
@property(readonly, assign) ISOpenURLRequest *openURLRequest;	// G=0x34352035; 
- (id)init;	// 0x34351edd
- (id)initWithOpenURLRequest:(id)openURLRequest;	// 0x34351ef1
- (id)_newSortedTargetsArray;	// 0x34352391
- (BOOL)_openURL:(id)url;	// 0x34352459
- (void)dealloc;	// 0x34351fe9
// declared property getter: - (id)openURLRequest;	// 0x34352035
- (void)run;	// 0x3435206d
@end

