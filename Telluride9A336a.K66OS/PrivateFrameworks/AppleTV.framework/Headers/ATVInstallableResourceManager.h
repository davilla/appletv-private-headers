/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NSURLDownloadDelegate.h"
#import "AppleTV-Structs.h"

@class NSMutableSet, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVInstallableResourceManager : NSObject <NSURLDownloadDelegate> {
@private
	dispatch_queue_s *_queue;	// 4 = 0x4
	NSString *_basePath;	// 8 = 0x8
	BOOL _downloadingFile;	// 12 = 0xc
	BOOL _downloadCompletedSuccessfully;	// 13 = 0xd
	NSMutableSet *_dirtyResourceRecords;	// 16 = 0x10
	NSArray *_resources;	// 20 = 0x14
}
@property(retain) NSArray *resources;	// G=0x33a210d1; S=0x33a210e5; @synthesize=_resources
+ (id)_buildRecordsAtBasePath:(id)basePath;	// 0x33a21421
+ (id)_buildRecordsForMerchantPath:(id)merchantPath;	// 0x33a216a1
+ (id)sharedInstance;	// 0x33a20675
- (unsigned long long)_bytesUsed;	// 0x33a21855
- (id)_initWithPath:(id)path;	// 0x33a21109
- (BOOL)_installDownloadedTarball:(id)tarball to:(id)to version:(id)version;	// 0x33a21e85
- (void)_markAsDirty:(id)dirty;	// 0x33a2232d
- (id)_merchantIdentifierFromPath:(id)path;	// 0x33a21e39
- (id)_recordForName:(id)name merchant:(id)merchant;	// 0x33a21c01
- (void)_removeLeastRecentlyUsedResource;	// 0x33a219b1
- (id)_resourcesForMerchant:(id)merchant named:(id)named;	// 0x33a20df1
- (void)_saveDirtyResourcesNotification:(id)notification;	// 0x33a2234d
- (void)dealloc;	// 0x33a20731
- (void)download:(id)download didFailWithError:(id)error;	// 0x33a21055
- (void)downloadDidFinish:(id)download;	// 0x33a21095
- (void)installResourceNamed:(id)named version:(id)version url:(id)url merchant:(id)merchant completionHandler:(id)handler;	// 0x33a207e9
- (id)resourceForMerchant:(id)merchant named:(id)named;	// 0x33a2100d
// declared property getter: - (id)resources;	// 0x33a210d1
- (id)resourcesForMerchant:(id)merchant;	// 0x33a20ff9
// declared property setter: - (void)setResources:(id)resources;	// 0x33a210e5
@end

