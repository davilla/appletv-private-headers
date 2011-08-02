/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebIconFetcherPrivate;

__attribute__((visibility("hidden")))
@interface WebIconFetcher : NSObject {
@private
	WebIconFetcherPrivate *_private;	// 4 = 0x4
}
+ (id)_fetchApplicationIconForFrame:(id)frame target:(id)target selector:(SEL)selector;	// 0x3053b1cd
- (id)init;	// 0x3053b099
- (id)_initWithIconFetcher:(PassRefPtr<WebCore::IconFetcher>)iconFetcher client:(WebIconFetcherClient *)client;	// 0x3053b16d
- (void)cancel;	// 0x3053b0f9
- (void)dealloc;	// 0x3053b09d
- (void)finalize;	// 0x3053b111
@end
