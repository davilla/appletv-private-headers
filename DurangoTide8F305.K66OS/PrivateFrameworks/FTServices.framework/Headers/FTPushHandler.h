/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <NSObject.h> // Unknown library

@class NSData, NSArray;
@protocol FTPushHandlerDelegate;

@interface FTPushHandler : NSObject {
	NSArray *_topics;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	BOOL _registeredForPush;	// 12 = 0xc
}
@property(assign, nonatomic) id<FTPushHandlerDelegate> delegate;	// G=0x31c1c805; S=0x31c1c815; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSData *pushToken;	// G=0x31c1c801; 
@property(assign) BOOL registered;	// G=0x31c1c7ed; S=0x31c1c7fd; 
@property(readonly, assign, nonatomic) NSArray *topics;	// G=0x31c1c825; @synthesize=_topics
+ (id)alloc;	// 0x31c1c8e1
- (id)initWithTopics:(id)topics;	// 0x31c1c891
- (void)dealloc;	// 0x31c1c849
// declared property getter: - (id)delegate;	// 0x31c1c805
// declared property getter: - (id)pushToken;	// 0x31c1c801
// declared property getter: - (BOOL)registered;	// 0x31c1c7ed
- (void)requestKeepAlive;	// 0x31c1c835
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31c1c815
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x31c1c7fd
// declared property getter: - (id)topics;	// 0x31c1c825
@end

