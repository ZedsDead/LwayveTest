// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Foundation;
@import ObjectiveC;
@import CoreGraphics;
@import MediaPlayer;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

///
SWIFT_PROTOCOL_NAMED("AnalyticsControlProtocol")
@protocol LwayveAnalyticsControlProtocol
/// Set the handler to receive callback each time the event would be tracked
@property (nonatomic, copy) void (^ _Nullable analyticsEventTrackHandler)(NSString * _Nonnull);
/// Sends all pending analytic events.
- (void)sendAnalyticEvents;
/// The device Id used in analytics events
- (void)getAnalyticsDeviceId:(void (^ _Nonnull)(NSString * _Nonnull))completion;
@end

@class UIApplication;

/// The following methods are available for handling application remote notifications.
SWIFT_PROTOCOL_NAMED("ApplicationRemoteNotificationsHandler")
@protocol LwayveApplicationRemoteNotificationsHandler
/// This method should be called in -application:didFinishLaunchingWithOptions: of the application delegate after the SDK has been initialized.
/// \param application The singleton application object passed through <code>-application:didFinishLaunchingWithOptions</code>.
///
/// \param launchOptions A dictionary indicating the reason the app was launched (if any) passed through -application:didFinishLaunchingWithOptions:.
///
- (void)handleApplication:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
/// This method should be called in <code>-application:didReceiveRemoteNotification:</code> or <code>-application:didReceiveRemoteNotification:fetchCompletionHandler</code> to handle remote notifications.
/// \param application The singleton app object.
///
/// \param userInfo A dictionary that contains information related to the remote notification.
///
- (void)handleApplication:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo;
/// Indicates the state of remote notifications listening. Set to <code>false</code> to stop receiving remote notifications.
@property (nonatomic) BOOL notificationsActive;
@end

@protocol LwayveAudioTrack;

/// The methods of the protocol allow the delegate to handle the sequence of audio track calling.
SWIFT_PROTOCOL_NAMED("AudioControlDelegate")
@protocol LwayveAudioControlDelegate
@optional
/// This method is called when the audio track has started loading before actual playing.
/// This method may be not called if the track was preloaded before.
/// In this case method <code>didStartPlayingTrack</code> will be called at once.
/// \param track The audio track that started playing.
///
- (void)lwayveSDKWithDidStartLoadingTrack:(id <LwayveAudioTrack> _Nonnull)track;
/// This method is called when the audio track has started playing.
/// \param track The audio track that started playing.
///
- (void)lwayveSDKWithDidStartPlayingTrack:(id <LwayveAudioTrack> _Nonnull)track;
/// This method is called when the audio track was paused.
/// \param track The audio track that was paused.
///
- (void)lwayveSDKWithDidPauseTrack:(id <LwayveAudioTrack> _Nonnull)track;
/// This method is called when the audio track was almost played to the end (about 0.1 sec left to the end).
/// \param track The audio track that was paused.
///
- (void)lwayveSDKWithDidAlmostPlayTrackToEnd:(id <LwayveAudioTrack> _Nonnull)track;
/// This method is called when the audio track was played to the end.
/// \param track The audio track that was paused.
///
- (void)lwayveSDKWithDidPlayTrackToEnd:(id <LwayveAudioTrack> _Nonnull)track;
/// This method is called when the audio track has ended.
/// \param track The audio track that ended.
///
- (void)lwayveSDKWithDidEndPlayingTrack:(id <LwayveAudioTrack> _Nonnull)track;
/// This method is called when the SDK has reached an error.
/// \param track The audio track that failed to play.
///
/// \param error The error object.
///
- (void)lwayveSDKWithDidFailPlayingTrack:(id <LwayveAudioTrack> _Nonnull)track withError:(NSError * _Nonnull)error;
/// This method is called when the audio player status has changed.
/// \param isReadyToPlay Set to <code>true</code> when the audio player has tracks to play. A host application should disable play controls when <code>isReadyToPlay == false</code>.
///
- (void)lwayveSDKWithPlayerIsReadyToPlayStatusDidChange:(BOOL)isReadyToPlay;
/// This method is called when the audio player status has changed.
/// \param canSkip Set to <code>true</code> when there is at least one unfinished track. A host application should disable the Skip button when <code>canSkip == false</code>.
///
- (void)lwayveSDKWithPlayerCanSkipStatusDidChange:(BOOL)canSkip;
/// This method is called when the audio player status has changed.
/// \param canRewind Set to <code>true</code> when the rewind action can be performed. A host application should disable the Rewind button when <code>canRewind == false</code>.
///
- (void)lwayveSDKWithPlayerCanRewindStatusDidChange:(BOOL)canRewind;
@end


/// The protocol that provides the additional interface for controlling the audio playback.
SWIFT_PROTOCOL_NAMED("AudioPlaybackControlProtocol")
@protocol LwayveAudioPlaybackControlProtocol
/// Determine if the audio player is ready to play an audio track. If <code>true</code> is returned, the audio player is ready.
/// seealso:
/// <code>AudioControlDelegate.lwayveSDK(playerIsReadyToPlayStatusDidChange:)</code>
@property (nonatomic, readonly) BOOL isReadyToPlay;
/// Determine if the skip action can be performed in the audio player.
/// seealso:
/// <code>AudioControlDelegate.lwayveSDK(playerCanSkipStatusDidChange:)</code>
@property (nonatomic, readonly) BOOL canSkip;
/// Determine if the rewind action can be performed in the audio player.
/// seealso:
/// <code>AudioControlDelegate.lwayveSDK(playerCanRewindStatusDidChange:)</code>
@property (nonatomic, readonly) BOOL canRewind;
/// Indicates if the audio player is currently playing an audio track.
/// seealso:
/// <code>AudioControlDelegate.lwayveSDK(didStartPlayingTrack:)</code>
/// seealso:
/// <code>AudioControlDelegate.lwayveSDK(didEndPlayingTrack:)</code>
@property (nonatomic, readonly) BOOL isPlaying;
/// Indicates if player is waiting for data to be loaded to continue playback.
/// seealso:
/// <code>AudioControlDelegate.lwayveSDK(didStartLoadingTrack:)</code>
@property (nonatomic, readonly) BOOL isWaitingForCurrentTrackToBeLoaded;
/// Start playing queued audio tracks.
/// seealso:
/// <code>isPlaying</code>
- (void)play;
/// Pause the playback of the current audio track.
/// seealso:
/// <code>AudioControlDelegate.lwayveSDK(didPauseTrack:)</code>
- (void)pause;
/// End the playback of the current audio track and remove all audio tracks from the queue.
- (void)stop;
/// End the playback of the current audio track and start the playback of the next audio track in the queue (if there is one).
- (void)skip;
/// Restart the current audio track from the beginning if it has played for greater than or equal to <code>kLwayveAudioPlaybackControlRewindThreshold</code> seconds;
/// otherwise, start playing the previous audio track (if any). If there is no previous audio track, start the current audio track from the beginning.
- (void)rewind;
@end

enum LwayveLanguage : NSInteger;

/// The protocol representing the interface for the object that can be played in the audio player.
SWIFT_PROTOCOL_NAMED("AudioTrack")
@protocol LwayveAudioTrack <NSCoding>
/// The unique identifier of the audio track.
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// The audio clip identifier.
@property (nonatomic, readonly, copy) NSString * _Nullable clipId;
/// An instance of the URL that references a media resource.
@property (nonatomic, readonly, copy) NSURL * _Nonnull url;
/// The name of the audio track.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// The language of the audio track.
@property (nonatomic, readonly) enum LwayveLanguage language;
/// The duration of the audio track.
/// The initial value is kLwayveAudioTrackDurationIndefinite until the duration has been loaded.
/// To ensure that the value of the duration is loaded, use durationLoadHandler.
@property (nonatomic, readonly) NSTimeInterval duration;
/// Set your handler to receive updates about the loading of the audio track duration.
@property (nonatomic, copy) void (^ _Nullable durationLoadHandler)(NSTimeInterval);
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nonnull metadata;
@end


@interface NSBundle (SWIFT_EXTENSION(LwayveSDK))
@end

@class LwayveUserContext;

/// The protocol provides an additional interface for updating Contextual Audio Experience context
/// and building an appropriate playlist.
SWIFT_PROTOCOL_NAMED("ContextControlProtocol")
@protocol LwayveContextControlProtocol
/// Update user likes in a Contextual Audio Experience.
/// \param userLikes The list of strings representing the updated user likes in the Contextual Audio Experience.
///
- (void)setWithUserLikes:(NSArray<NSString *> * _Nonnull)userLikes;
/// Add user likes to a Contextual Audio Experience.
/// \param userLikes The list of strings representing the user likes to add to the Contextual Audio Experience.
///
- (void)addWithUserLikes:(NSArray<NSString *> * _Nonnull)userLikes;
/// Remove user likes from a Contextual Audio Experience.
/// \param userLikes The list of strings representing the user likes to remove from the Contextual Audio Experience.
///
- (void)removeWithUserLikes:(NSArray<NSString *> * _Nonnull)userLikes;
/// Update locations in a Contextual Audio Experience.
/// \param locations The list of strings representing the updated locations in the Contextual Audio Experience.
///
- (void)setWithLocations:(NSArray<NSString *> * _Nonnull)locations;
/// Add locations to a Contextual Audio Experience.
/// \param locations The list of strings representing the locations to be added to the Contextual Audio Experience.
///
- (void)addWithLocations:(NSArray<NSString *> * _Nonnull)locations;
/// Remove locations from a Contextual Audio Experience.
/// \param locations The list of strings representing the locations to be removed from the Contextual Audio Experience.
///
- (void)removeWithLocations:(NSArray<NSString *> * _Nonnull)locations;
/// The data object that contains the user context that is being used for generating the playlist.
@property (nonatomic, readonly, strong) LwayveUserContext * _Nullable currentUserContext;
///
@property (nonatomic, readonly) NSTimeInterval timeOffset;
@end


@interface NSDateFormatter (SWIFT_EXTENSION(LwayveSDK))
@end


/// The following methods provide additional control over a Contextual Audio Experience.
/// Usually, a host app does not have to use these methods until testing or debugging is needed.
SWIFT_PROTOCOL_NAMED("ExperienceControlProtocol")
@protocol LwayveExperienceControlProtocol
/// Request the Contextual Audio Experience, ignoring the local cache.
- (void)fetchExperienceFromServer;
@end


/// The following properties provide additional information about the current Contextual Audio Experience.
SWIFT_PROTOCOL_NAMED("ExperienceSupplementaryInfo")
@protocol LwayveExperienceSupplementaryInfo
/// All user likes present in the current Contextual Audio Experience.
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull allExperienceTags;
/// All locations present in the current Contextual Audio Experience.
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull allExperienceLocations;
/// Data object representing raw experience JSON.
@property (nonatomic, readonly, copy) NSData * _Nullable rawExperience;
@end


@interface NSHTTPURLResponse (SWIFT_EXTENSION(LwayveSDK))
@end


/// An object of the class represents a user location.
/// seealso:
/// <code>UserContext</code>
SWIFT_CLASS_NAMED("Location")
@interface LwayveLocation : NSObject
/// Location name.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
///
@property (nonatomic, readonly) NSInteger hashValue;
///
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class NSCoder;

@interface LwayveLocation (SWIFT_EXTENSION(LwayveSDK)) <NSCoding>
///
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
///
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
@end

/// The enum of supported languages.
typedef SWIFT_ENUM(NSInteger, LwayveLanguage) {
  LwayveLanguageEnglish = 0,
  LwayveLanguageFrench = 1,
};

@class UIImage;

/// The following methods are available for controlling the information displayed in the iOS Control Center and on the iOS Lock screen for currently playing audio tracks.
SWIFT_PROTOCOL("_TtP9LwayveSDK28LwayveNowPlayingInfoProtocol_")
@protocol LwayveNowPlayingInfoProtocol
/// Get/set the default album artwork image that is displayed in the iOS Control Center and on the iOS Lock screen
/// if a track-specific image is not provided.
/// note:
/// The default image should be square.
@property (nonatomic, strong) UIImage * _Nullable defaultAlbumArtworkImage;
@end

@class LwayveSDK;
@class UIColor;
@class UIEvent;

/// LwayvePlaybackControlView provides a branded control for interaction
/// with the embeddable contextual audio experience service.
SWIFT_CLASS("_TtC9LwayveSDK25LwayvePlaybackControlView")
@interface LwayvePlaybackControlView : UIView
/// Set current using instance of LwayveSDK for controlling playback and handling its actual state.
@property (nonatomic, strong) LwayveSDK * _Nullable lwayveSDK;
/// Initializes and returns a newly allocated LwayvePlaybackControlView object
/// with the specified LwayveSDK branded interface.
/// \param frame The frame rectangle for the LwayvePlaybackControlView.
///
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nullable defaultTrackName;
@property (nonatomic, strong) UIColor * _Nonnull buttonsColor;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end


@interface LwayvePlaybackControlView (SWIFT_EXTENSION(LwayveSDK))
@end


@interface LwayvePlaybackControlView (SWIFT_EXTENSION(LwayveSDK))
@end


@interface LwayvePlaybackControlView (SWIFT_EXTENSION(LwayveSDK))
@end


@interface LwayvePlaybackControlView (SWIFT_EXTENSION(LwayveSDK))
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@end


@interface LwayvePlaybackControlView (SWIFT_EXTENSION(LwayveSDK))
@end


@interface LwayvePlaybackControlView (SWIFT_EXTENSION(LwayveSDK)) <LwayveAudioControlDelegate>
- (void)lwayveSDKWithDidStartLoadingTrack:(id <LwayveAudioTrack> _Nonnull)track;
- (void)lwayveSDKWithDidStartPlayingTrack:(id <LwayveAudioTrack> _Nonnull)track;
- (void)lwayveSDKWithDidPauseTrack:(id <LwayveAudioTrack> _Nonnull)track;
- (void)lwayveSDKWithDidAlmostPlayTrackToEnd:(id <LwayveAudioTrack> _Nonnull)track;
- (void)lwayveSDKWithDidEndPlayingTrack:(id <LwayveAudioTrack> _Nonnull)track;
- (void)lwayveSDKWithDidFailPlayingTrack:(id <LwayveAudioTrack> _Nonnull)track withError:(NSError * _Nonnull)error;
- (void)lwayveSDKWithPlayerIsReadyToPlayStatusDidChange:(BOOL)isReadyToPlay;
- (void)lwayveSDKWithPlayerCanSkipStatusDidChange:(BOOL)canSkip;
- (void)lwayveSDKWithPlayerCanRewindStatusDidChange:(BOOL)canRewind;
@end

@class UIFont;

@interface LwayvePlaybackControlView (SWIFT_EXTENSION(LwayveSDK))
@property (nonatomic, strong) UIFont * _Nonnull trackNameFont;
@property (nonatomic, strong) UIColor * _Nonnull trackNameTextColor;
@property (nonatomic, strong) UIColor * _Nullable trackNameBackgroundColor;
@end

@class LwayveSDKConfiguration;
@protocol PlayListEventsListener;
@protocol LwayveSDKDelegate;

/// Use singleton instance of <code>LwayveSDK</code> available by <code>LwayveSDK.sharedSDK</code> to communicate with the SDK.
SWIFT_CLASS("_TtC9LwayveSDK9LwayveSDK")
@interface LwayveSDK : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
/// This method must be called before the SDK can be used.
/// seealso:
/// <code>LwayveSDKDelegate.lwayveSDK(didInit:)</code>
/// seealso:
/// <code>LwayveSDKInitializationError</code>
/// \param configuration Configuration object with required parameters
///
- (BOOL)initializeWithConfiguration:(LwayveSDKConfiguration * _Nonnull)configuration error:(NSError * _Nullable * _Nullable)error;
/// The SDK will be deinitialized after calling this method.
/// note:
/// Deinitialization may be asynchronious. Wait for <code>LwayveSDKDelegate.lwayveSDK(didDeinit:)</code> to be called before initializing the SDK again.
- (void)deinitialize;
/// The singleton object of <code>LwayveSDK</code>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) LwayveSDK * _Nonnull sharedSDK;)
+ (LwayveSDK * _Nonnull)sharedSDK SWIFT_WARN_UNUSED_RESULT;
///
@property (nonatomic, weak) id <PlayListEventsListener> _Nullable playlistEventsListener;
///
@property (nonatomic, weak) id <LwayveSDKDelegate> _Nullable delegate;
/// Using this property you can get or update the SDK preferred language.
/// Update is an asynchronous operation. The default value is the current device language, if the LWAYVE SDK supports it.
/// If a language is not set on the current device, the default is LwayveLanguage.english.
@property (nonatomic) enum LwayveLanguage language;
/// Adds a listener for audio playback events.
/// \param delegate An object conforming to the <code>AudioControlDelegate</code> protocol.
///
- (void)addWithAudioControlDelegate:(id <LwayveAudioControlDelegate> _Nonnull)delegate;
/// Removes a listener for audio playback events.
/// \param delegate An object conforming to the <code>AudioControlDelegate</code> protocol.
///
- (void)removeWithAudioControlDelegate:(id <LwayveAudioControlDelegate> _Nonnull)delegate;
@end

@class LwayvePlaylist;

/// This protocol contains methods for handling playlist updates.
SWIFT_PROTOCOL("_TtP9LwayveSDK22PlayListEventsListener_")
@protocol PlayListEventsListener
/// This method is called each time the playlist has been updated.
/// \param playlist The object that contains additional information about the updated playlist.
///
/// \param userContext UserContext of updated playlist
///
- (void)playlistDidUpdate:(LwayvePlaylist * _Nullable)playlist forUserContext:(LwayveUserContext * _Nonnull)userContext;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK)) <PlayListEventsListener>
/// See <code>PlayListEventsListener.playlistDidUpdate(_: forUserContext:)</code>
- (void)playlistDidUpdate:(LwayvePlaylist * _Nullable)playlist forUserContext:(LwayveUserContext * _Nonnull)userContext;
/// See <code>PlayListEventsListener.playlist</code>
@property (nonatomic, readonly, strong) LwayvePlaylist * _Nullable playlist;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK)) <LwayveNowPlayingInfoProtocol>
/// See <code>LwayveNowPlayingInfoProtocol.defaultAlbumArtworkImage</code>
@property (nonatomic, strong) UIImage * _Nullable defaultAlbumArtworkImage;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK)) <LwayveApplicationRemoteNotificationsHandler>
/// See <code>ApplicationRemoteNotificationsHandler.notificationsActive</code>
@property (nonatomic) BOOL notificationsActive;
/// See <code>ApplicationRemoteNotificationsHandler.handleApplication(_:didFinishLaunchingWithOptions:)</code>
- (void)handleApplication:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
/// See <code>ApplicationRemoteNotificationsHandler.handleApplication(_:didReceiveRemoteNotification:)</code>
- (void)handleApplication:(UIApplication * _Nonnull)application didReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK)) <LwayveAnalyticsControlProtocol>
@property (nonatomic, copy) void (^ _Nullable analyticsEventTrackHandler)(NSString * _Nonnull);
- (void)sendAnalyticEvents;
- (void)getAnalyticsDeviceId:(void (^ _Nonnull)(NSString * _Nonnull))completion;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK)) <LwayveExperienceSupplementaryInfo>
/// See <code>ExperienceSupplementaryInfo.allExperienceTags</code>
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull allExperienceTags;
/// See <code>ExperienceSupplementaryInfo.allExperienceLocations</code>
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull allExperienceLocations;
@property (nonatomic, readonly, copy) NSData * _Nullable rawExperience;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK))
@property (nonatomic) NSInteger audioBufferMaxTrackCount;
@property (nonatomic) NSInteger audioBufferMaxSize;
@property (nonatomic) NSInteger audioCacheMaxSize;
- (void)clearAudioCache;
@end


/// This protocol provides an interface for controlling the Contextual Audio Experience playlist.
SWIFT_PROTOCOL_NAMED("PlaylistControlProtocol")
@protocol LwayvePlaylistControlProtocol
/// Refresh the playlist based on the current context of playlist builder.
- (void)refreshPlaylist;
/// Re-request the Contextual Audio Experience from the server.
- (void)forceReloadExperience;
/// The list of items in the playlist.
@property (nonatomic, readonly, strong) LwayvePlaylist * _Nullable generatedPlaylist;
/// The list of audio tracks in the queue, including the currently playing audio track (if any).
@property (nonatomic, readonly, copy) NSArray<id <LwayveAudioTrack>> * _Nonnull audioQueue;
/// The list of unplayed audio tracks.
@property (nonatomic, readonly, copy) NSArray<id <LwayveAudioTrack>> * _Nonnull unplayedTracksQueue;
/// The list of played audio tracks. The last audio track in the list is the most recently played one.
@property (nonatomic, readonly, copy) NSArray<id <LwayveAudioTrack>> * _Nonnull playedTracksHistory;
/// The list of identifiers for the played audio tracks.
@property (nonatomic, readonly, copy) NSSet<NSString *> * _Nonnull playedTracksIds;
/// Clear the history of played audio tracks.
- (void)clearPlayedItems;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK)) <LwayvePlaylistControlProtocol>
/// See <code>PlaylistControlProtocol.refreshPlaylist()</code>
- (void)refreshPlaylist;
/// See <code>PlaylistControlProtocol.forceReloadExperience()</code>
- (void)forceReloadExperience;
/// See <code>PlaylistControlProtocol.generatedPlaylist</code>
@property (nonatomic, readonly, strong) LwayvePlaylist * _Nullable generatedPlaylist;
/// See <code>PlaylistControlProtocol.audioQueue</code>
@property (nonatomic, readonly, copy) NSArray<id <LwayveAudioTrack>> * _Nonnull audioQueue;
/// See <code>PlaylistControlProtocol.unplayedTracksQueue</code>
@property (nonatomic, readonly, copy) NSArray<id <LwayveAudioTrack>> * _Nonnull unplayedTracksQueue;
/// See <code>PlaylistControlProtocol.playedTracksHistory</code>
@property (nonatomic, readonly, copy) NSArray<id <LwayveAudioTrack>> * _Nonnull playedTracksHistory;
/// See <code>PlaylistControlProtocol.playedTracksIds</code>
@property (nonatomic, readonly, copy) NSSet<NSString *> * _Nonnull playedTracksIds;
/// See <code>PlaylistControlProtocol.clearPlayedItems()</code>
- (void)clearPlayedItems;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK)) <LwayveContextControlProtocol>
/// See <code>ContextControlProtocol.set(locations:)</code>
- (void)setWithLocations:(NSArray<NSString *> * _Nonnull)locations;
/// See <code>ContextControlProtocol.set(userLikes:)</code>
- (void)setWithUserLikes:(NSArray<NSString *> * _Nonnull)userLikes;
/// See <code>ContextControlProtocol.currentUserContext</code>
@property (nonatomic, readonly, strong) LwayveUserContext * _Nullable currentUserContext;
/// See <code>ContextControlProtocol.add(userLikes:)</code>
- (void)addWithUserLikes:(NSArray<NSString *> * _Nonnull)userLikes;
/// See <code>ContextControlProtocol.add(locations:)</code>
- (void)addWithLocations:(NSArray<NSString *> * _Nonnull)locations;
/// See <code>ContextControlProtocol.remove(userLikes:)</code>
- (void)removeWithUserLikes:(NSArray<NSString *> * _Nonnull)userLikes;
/// See <code>ContextControlProtocol.remove(locations:)</code>
- (void)removeWithLocations:(NSArray<NSString *> * _Nonnull)locations;
@property (nonatomic) NSTimeInterval timeOffset;
@end


@interface LwayveSDK (SWIFT_EXTENSION(LwayveSDK)) <LwayveAudioPlaybackControlProtocol>
/// See <code>AudioPlaybackControlProtocol.isReadyToPlay</code>
@property (nonatomic, readonly) BOOL isReadyToPlay;
/// See <code>AudioPlaybackControlProtocol.canSkip</code>
@property (nonatomic, readonly) BOOL canSkip;
/// See <code>AudioPlaybackControlProtocol.canRewind</code>
@property (nonatomic, readonly) BOOL canRewind;
/// See <code>AudioPlaybackControlProtocol.isPlaying</code>
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, readonly) BOOL isWaitingForCurrentTrackToBeLoaded;
/// See <code>AudioPlaybackControlProtocol.play()</code>
- (void)play;
/// See <code>AudioPlaybackControlProtocol.pause()</code>
- (void)pause;
/// See <code>AudioPlaybackControlProtocol.stop()</code>
- (void)stop;
/// See <code>AudioPlaybackControlProtocol.skip()</code>
- (void)skip;
/// See <code>AudioPlaybackControlProtocol.rewind()</code>
- (void)rewind;
@end

enum LwayveSDKConfigurationType : NSInteger;

/// A <code>LwayveSDKConfiguration</code> object defines parameters required for LWAYVE SDK.
SWIFT_CLASS("_TtC9LwayveSDK22LwayveSDKConfiguration")
@interface LwayveSDKConfiguration : NSObject
/// Use configurationType to set predefined deployment settings.
@property (nonatomic, readonly) enum LwayveSDKConfigurationType configurationType;
/// Use baseURL to override the default LWAYVE service URL.
@property (nonatomic, readonly, copy) NSURL * _Nonnull baseURL;
/// Authentification token
@property (nonatomic, readonly, copy) NSString * _Nonnull authenticationToken;
/// Default initializer
/// \param configurationType - see <code>configurationType</code>
///
/// \param baseURL - see <code>baseURL</code>. Use <code>baseURL = nil</code> to use default URL for configurationType.
///
/// \param authenticationToken - see <code>authenticationToken</code>
///
- (nonnull instancetype)initWithConfigurationType:(enum LwayveSDKConfigurationType)configurationType baseURL:(NSURL * _Nullable)baseURL authenticationToken:(NSString * _Nonnull)authenticationToken OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, LwayveSDKConfigurationType) {
  LwayveSDKConfigurationTypeQa = 0,
  LwayveSDKConfigurationTypeProd = 1,
};


/// The following methods are available for handling generic LWAYVE SDK events.
SWIFT_PROTOCOL("_TtP9LwayveSDK17LwayveSDKDelegate_")
@protocol LwayveSDKDelegate
@optional
/// This method is called when the LWAYVE SDK has successfully initialized.
/// \param sdk The LWAYVE SDK object.
///
- (void)lwayveSDKWithDidInit:(LwayveSDK * _Nonnull)sdk;
/// This method is called when the LWAYVE SDK has been de-initialized.
/// \param sdk The LWAYVE SDK object.
///
- (void)lwayveSDKWithDidDeinit:(LwayveSDK * _Nonnull)sdk;
@end

/// The error can be thrown by the <code>LwayveSDK.initialize(configuration:)</code> method.
typedef SWIFT_ENUM(NSInteger, LwayveSDKInitializationError) {
  LwayveSDKInitializationErrorUnknownError = 0,
  LwayveSDKInitializationErrorAlreadyInitialized = 1,
};
static NSString * _Nonnull const LwayveSDKInitializationErrorDomain = @"LwayveSDK.LwayveSDKInitializationError";


@interface MPMediaItemArtwork (SWIFT_EXTENSION(LwayveSDK))
@end


@protocol LwayvePlaylistItem;

/// Contains information about the generated playlist.
SWIFT_CLASS_NAMED("Playlist")
@interface LwayvePlaylist : NSObject
/// The unique identifier of the playlist.
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// The value representing the date the playlist will be updated.
@property (nonatomic, readonly, copy) NSDate * _Nullable nextEventTime;
/// The playlist items.
@property (nonatomic, readonly, copy) NSArray<id <LwayvePlaylistItem>> * _Nonnull items;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end



/// This protocol contains information about the objects that will be used for preparing the playlist.
SWIFT_PROTOCOL_NAMED("PlaylistItem")
@protocol LwayvePlaylistItem
/// The unique identifier of the playlist item.
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// The audio clip identifier.
@property (nonatomic, readonly, copy) NSString * _Nullable clipId;
/// The name of the playlist item.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// The string representing the path for the playlist item resource.
@property (nonatomic, readonly, copy) NSString * _Nullable url;
/// The language of the audio track.
@property (nonatomic, readonly) enum LwayveLanguage language;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nonnull itemMetadata;
@end


/// An object of the class represents a user like.
/// seealso:
/// <code>UserContext</code>
SWIFT_CLASS_NAMED("Tag")
@interface LwayveTag : NSObject
/// The name of the user like.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
///
@property (nonatomic, readonly) NSInteger hashValue;
///
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface LwayveTag (SWIFT_EXTENSION(LwayveSDK)) <NSCoding>
///
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
///
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
@end


@interface UIColor (SWIFT_EXTENSION(LwayveSDK))
@end


@interface UIImage (SWIFT_EXTENSION(LwayveSDK))
@end


@interface UIImage (SWIFT_EXTENSION(LwayveSDK))
@end


@interface UIView (SWIFT_EXTENSION(LwayveSDK))
@end


/// An object of the class represents context which is used to generate a user specific Contextual Audio Experience playlist.
SWIFT_CLASS_NAMED("UserContext")
@interface LwayveUserContext : NSObject
/// The user’s date/time in the UTC time zone.
@property (nonatomic, readonly, copy) NSDate * _Nonnull time;
/// The time offset which will be applied to actual time to simulate different user time without changin actual OS time.
@property (nonatomic, readonly) NSTimeInterval timeOffset;
/// The list of locations.
@property (nonatomic, readonly, copy) NSSet<LwayveLocation *> * _Nonnull locations;
/// The list of user likes.
@property (nonatomic, readonly, copy) NSSet<LwayveTag *> * _Nonnull tags;
/// The list of identifiers for the played audio tracks.
@property (nonatomic, readonly, copy) NSSet<NSString *> * _Nonnull playedPlaylistItemIds;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface LwayveUserContext (SWIFT_EXTENSION(LwayveSDK))
@end


@interface LwayveUserContext (SWIFT_EXTENSION(LwayveSDK))
@end


@interface LwayveUserContext (SWIFT_EXTENSION(LwayveSDK)) <NSCoding>
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
@end

#pragma clang diagnostic pop
