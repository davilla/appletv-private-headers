/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSObject.h"

@class NSSet, NSString;

@protocol MPMediaLibraryDataProvider <NSObject>
@property(readonly, assign, nonatomic) NSString *name;
@optional
@property(readonly, assign, nonatomic) NSSet *propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@required
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;
@optional
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block progressHandler:(id)handler;
- (void)disconnect;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;
@required
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;
- (void)loadCollectionsUsingFetchRequest:(id)request;
- (void)loadItemsUsingFetchRequest:(id)request;
- (void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
@optional
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;
@required
- (void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;
- (void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;
// declared property getter: - (id)name;
@optional
// declared property getter: - (id)propertiesToCache;
// declared property getter: - (BOOL)requiresAuthentication;
@required
// declared property getter: - (id)uniqueIdentifier;
@end

