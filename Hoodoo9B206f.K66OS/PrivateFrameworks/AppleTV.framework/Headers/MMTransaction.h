/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class MMRequest;

__attribute__((visibility("hidden")))
@interface MMTransaction : NSObject {
@private
	MMRequest *_request;	// 4 = 0x4
	BOOL _useSynchronous;	// 8 = 0x8
	BOOL _resultRequired;	// 9 = 0x9
}
@property(retain, nonatomic) MMRequest *request;	// G=0x36884d25; S=0x36884da9; @synthesize=_request
@property(assign, nonatomic) BOOL resultRequired;	// G=0x36884ce5; S=0x36884cf5; @synthesize=_resultRequired
@property(assign, nonatomic) BOOL useSynchronous;	// G=0x36884d05; S=0x36884d15; @synthesize=_useSynchronous
- (id)initWithRequest:(id)request synchronousFlag:(BOOL)flag resultRequired:(BOOL)required delegate:(id)delegate;	// 0x36884d35
- (void)dealloc;	// 0x3688515d
- (void)dispatch;	// 0x3688510d
- (int)errorType;	// 0x36884dd1
- (int)httpStatusCode;	// 0x36884fc9
- (BOOL)isSuccessful;	// 0x36885061
// declared property getter: - (id)request;	// 0x36884d25
- (id)result;	// 0x36884f61
// declared property getter: - (BOOL)resultRequired;	// 0x36884ce5
// declared property setter: - (void)setRequest:(id)request;	// 0x36884da9
// declared property setter: - (void)setResultRequired:(BOOL)required;	// 0x36884cf5
// declared property setter: - (void)setUseSynchronous:(BOOL)synchronous;	// 0x36884d15
- (int)transactionState;	// 0x36884ff1
// declared property getter: - (BOOL)useSynchronous;	// 0x36884d05
@end

