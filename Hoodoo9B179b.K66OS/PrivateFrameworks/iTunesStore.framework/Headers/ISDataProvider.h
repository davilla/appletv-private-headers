/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSURL, NSNumber, NSString, ISOperation, SSURLBagContext, SSAuthenticationContext;

@interface ISDataProvider : NSObject <NSCopying> {
	SSAuthenticationContext *_authenticationContext;	// 4 = 0x4
	NSNumber *_authenticatedAccountDSID;	// 8 = 0x8
	SSURLBagContext *_bagContext;	// 12 = 0xc
	long long _contentLength;	// 16 = 0x10
	NSString *_contentType;	// 24 = 0x18
	id _output;	// 28 = 0x1c
	ISOperation *_parentOperation;	// 32 = 0x20
	NSURL *_redirectURL;	// 36 = 0x24
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x3694a865; S=0x3694a879; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x3694a82d; S=0x3694a841; @synthesize=_authenticationContext
@property(retain) SSURLBagContext *bagContext;	// G=0x3694a89d; S=0x3694a8b1; @synthesize=_bagContext
@property(assign) long long contentLength;	// G=0x3694a8d5; S=0x3694a909; @synthesize=_contentLength
@property(retain) NSString *contentType;	// G=0x3694a93d; S=0x3694a951; @synthesize=_contentType
@property(retain) id output;	// G=0x3694a975; S=0x3694a989; @synthesize=_output
@property(assign) ISOperation *parentOperation;	// G=0x3694a9ad; S=0x3694a9bd; @synthesize=_parentOperation
@property(retain) NSURL *redirectURL;	// G=0x3694a9cd; S=0x3694a9e1; @synthesize=_redirectURL
+ (id)provider;	// 0x3694a6b9
// declared property getter: - (id)authenticatedAccountDSID;	// 0x3694a865
// declared property getter: - (id)authenticationContext;	// 0x3694a82d
// declared property getter: - (id)bagContext;	// 0x3694a89d
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x3694a701
- (void)closeStream;	// 0x3694a711
- (void)configureFromProvider:(id)provider;	// 0x3694a715
// declared property getter: - (long long)contentLength;	// 0x3694a8d5
// declared property getter: - (id)contentType;	// 0x3694a93d
- (id)copyWithZone:(NSZone *)zone;	// 0x3694a621
- (void)dealloc;	// 0x3694a541
- (BOOL)isStream;	// 0x3694a76d
- (void)migrateOutputFromSubProvider:(id)subProvider;	// 0x3694a771
// declared property getter: - (id)output;	// 0x3694a975
// declared property getter: - (id)parentOperation;	// 0x3694a9ad
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x3694a7d5
// declared property getter: - (id)redirectURL;	// 0x3694a9cd
- (void)resetStream;	// 0x3694a7c9
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x3694a879
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3694a841
// declared property setter: - (void)setBagContext:(id)context;	// 0x3694a8b1
// declared property setter: - (void)setContentLength:(long long)length;	// 0x3694a909
// declared property setter: - (void)setContentType:(id)type;	// 0x3694a951
// declared property setter: - (void)setOutput:(id)output;	// 0x3694a989
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x3694a9bd
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x3694a9e1
- (void)setup;	// 0x3694a7f9
- (long long)streamedBytes;	// 0x3694a7cd
@end

