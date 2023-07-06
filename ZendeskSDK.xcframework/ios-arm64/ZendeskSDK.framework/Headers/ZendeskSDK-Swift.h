#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef ZENDESKSDK_SWIFT_H
#define ZENDESKSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ZendeskSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


/// A wrapper class for a block that takes <code>ZendeskEvent</code> type and returns <code>Void</code>.
SWIFT_CLASS_NAMED("DispatchEvent")
@interface ZDKDispatchEvent : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIViewController;
@class NSString;
@protocol ZDKMessagingDelegate;

SWIFT_CLASS_NAMED("Messaging")
@interface ZDKMessaging : NSObject
/// Retrieve a view controller that either displays a conversation or a list of conversations, depending on business logic.
/// important:
/// Use your preferred presentation style (push, modal) to present the view.
/// You must embed the view controller in a UINavigationController if presenting modally.
/// note:
/// If a user exists, their ‘default’ conversation is displayed.
/// If no user exists, user and conversation are created.
///
/// returns:
/// A <code>UIViewController</code>  instance
- (UIViewController * _Nonnull)messagingViewController SWIFT_WARN_UNUSED_RESULT;
/// Returns the current total number of unread messages.
- (NSInteger)getUnreadMessageCount SWIFT_WARN_UNUSED_RESULT;
/// Provide a dictionary of custom fields.
/// note:
/// Strings, numbers and booleans are the only supported value types that can be passed.
/// <ul>
///   <li>
///     Sets values for the given fields that will be associated with any conversations that the end user actively participates in.
///   </li>
/// </ul>
/// \param fields The dictionary of custom fields to be provided.
///
- (void)setConversationFields:(NSDictionary<NSString *, NSObject *> * _Nonnull)fields;
/// Provide an array of tags.
/// <ul>
///   <li>
///     Sets the given tags that will be associated with any conversations that the end user actively participates in.
///   </li>
/// </ul>
/// \param tags The dictionary of custom tags to be provided.
///
- (void)setConversationTags:(NSArray<NSString *> * _Nonnull)tags;
/// Clears all custom fields from storage.
- (void)clearConversationFields;
/// Clears all custom tags from storage.
- (void)clearConversationTags;
/// Delegate that allows you to observe user interactions that happen in the SDK.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, weak) id <ZDKMessagingDelegate> _Nullable delegate;)
+ (id <ZDKMessagingDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <ZDKMessagingDelegate> _Nullable)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURL;
enum ZDKURLSource : NSInteger;

/// Delegate to receive callbacks from the SDK.
SWIFT_PROTOCOL_NAMED("MessagingDelegate")
@protocol ZDKMessagingDelegate
/// Optional delegate that allows custom URL link handling.
/// note:
/// Return <code>true</code> when there is no way to handle a specific URL and <code>Messaging</code> will perform OS default behaviour of opening
/// the <code>URL</code> in the default browser.
/// \param messaging <code>Messaging</code> instance
///
/// \param url The <code>URL</code> the user actioned.
///
/// \param source The <code>source</code> from which the user actioned the URL from.
///
///
/// returns:
/// Return <code>true</code> if Messaging should handle the URL. Return <code>false</code> if there is a specified URL flow.
- (BOOL)messaging:(ZDKMessaging * _Nonnull)messaging shouldHandleURL:(NSURL * _Nonnull)url from:(enum ZDKURLSource)source SWIFT_WARN_UNUSED_RESULT;
@end

@class ZDKMessagingFactoryParameters;

SWIFT_PROTOCOL("_TtP10ZendeskSDK16MessagingFactory_")
@protocol MessagingFactory
- (ZDKMessaging * _Nonnull)createMessagingWith:(ZDKMessagingFactoryParameters * _Nonnull)parameters SWIFT_WARN_UNUSED_RESULT;
@end


/// The set of parameters to be provided to MessagingFactory <code>createMessaging</code> to create an instance of <code>Messaging</code>.
SWIFT_CLASS_NAMED("MessagingFactoryParameters")
@interface ZDKMessagingFactoryParameters : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("MessagingSettings")
@interface ZDKMessagingSettings : NSObject
/// Returns a Boolean value that indicates whether the receiver and a given object are equal.
/// note:
/// <code>createdAt</code> timestamp is not compared here by choice.
/// \param object the object to compare against
///
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// This object is used to provide session-based data to capture contextual information about an end user. This data is viewable inside
/// Agent Workspace.
SWIFT_CLASS_NAMED("PageView")
@interface ZDKPageView : NSObject
/// <code>PageView</code> object that is used to provide session-based data associated to an end user.
/// \param pageTitle The title of the page that was viewed.
///
/// \param url The location of the page that was viewed.
///
- (nonnull instancetype)initWithPageTitle:(NSString * _Nonnull)pageTitle url:(NSString * _Nonnull)url OBJC_DESIGNATED_INITIALIZER;
/// Returns a Boolean value that indicates whether the receiver and a given object are equal.
/// \param object the object to compare against.
///
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// An enum representing the source of actioned <code>URL</code>.
typedef SWIFT_ENUM_NAMED(NSInteger, ZDKURLSource, "URLSource", open) {
/// User selected <code>URL</code> from <code>text</code> on the Conversation screen.
  ZDKURLSourceText = 0,
/// User selected <code>URL</code> from a <code>carousel</code> message on the conversation screen.
  ZDKURLSourceCarousel = 1,
/// User selected <code>URL</code> from a <code>file</code> message on the conversation screen.
  ZDKURLSourceFile = 2,
/// User selected <code>URL</code> from a <code>image</code> message on the conversation screen.
  ZDKURLSourceImage = 3,
/// User selected <code>URL</code> from a <code>link</code> message button from a message on the conversation screen.
  ZDKURLSourceLinkMessageAction = 4,
/// User selected <code>URL</code> from a <code>webView</code> message button from a message on the conversation screen.
  ZDKURLSourceWebViewMessageAction = 5,
};

/// The set of events that can be emitted from Zendesk SDK.
typedef SWIFT_ENUM(NSInteger, ZDKZendeskEvent, open) {
/// Invoked when there is a change to the current total number of unread messages.
  ZDKZendeskEventUnreadMessageCountChanged = 0,
/// Invoked when a rest call fails for authentication reasons.
  ZDKZendeskEventAuthenticationFailed = 1,
};


/// The entry point to execute SDK actions. To obtain an instance use <code>Zendesk.initialize(channelKey:completionHandler:)</code>.
SWIFT_CLASS("_TtC10ZendeskSDK7Zendesk")
@interface Zendesk : NSObject
/// Optional property allows integrators to interact with the <code>Messaging</code> capability
/// and its feature set.
/// note:
/// This will be <code>nil</code> if <code>Messaging</code> is not enabled in the account’s admin settings or the
/// <code>DefaultMessagingFactory</code> was not passed in the <code>initialize</code> method.
@property (nonatomic, readonly, strong) ZDKMessaging * _Nullable messaging;
/// Optional property allows integrators to interact with the initialized <code>Zendesk</code> instance.
/// note:
/// This will be <code>nil</code> if <code>initialize</code> was never called or failed with an error.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Zendesk * _Nullable instance;)
+ (Zendesk * _Nullable)instance SWIFT_WARN_UNUSED_RESULT;
/// Invalidates the current instance of <code>Zendesk</code>.
/// After calling this method you will have to call <code>Zendesk.initialize()</code> again if you would like to use <code>Zendesk</code>.
+ (void)invalidate;
/// Remove event observer to stop observing events emitted by from <code>Zendesk</code>.
- (void)removeEventObserver:(id _Nonnull)observer;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface Zendesk (SWIFT_EXTENSION(ZendeskSDK))
/// Initializes <code>Zendesk</code> for the given <code>channelKey</code>. A <code>MessagingFactory</code> can be optionally passed here
/// to add the <code>Messaging</code> capability. This method is an asynchronous call
/// that retrieves settings from the network that calls the <code>completionHandler</code> with the result.
/// attention:
/// This method must complete successfully before <code>Zendesk.instance</code> can be called.
/// After a successful call has been made, calling it again with the same <code>channelKey</code> will succeed immediately
/// without performing a network call.
/// \param channelKey The key of your Messaging iOS channel
///
/// \param messagingFactory Optional parameter to include the <code>Messaging</code> capability, pass an initialized <code>DefaultMessagingFactory</code> here.
///
/// \param completionHandler A block that takes  an optional <code>Zendesk</code>
/// instance which will be non-nil in the case of a success and an optional <code>Error</code> which will be non-nil in the case of a failure.
///
+ (void)initializeWithChannelKey:(NSString * _Nonnull)channelKey messagingFactory:(id <MessagingFactory> _Nullable)messagingFactory completionHandler:(void (^ _Nullable)(Zendesk * _Nullable, NSError * _Nullable))completionHandler;
/// Add an event observer to observe events emitted from <code>Zendesk</code>.
/// \param observer The object in which events will be received.
///
/// \param completionHandler A block that receives a <code>ZDKZendeskEvent</code>.
///
- (void)addEventObserver:(id _Nonnull)observer :(void (^ _Nullable)(enum ZDKZendeskEvent, id _Nullable))completionHandler;
/// Send a page view event, that captures a specific user interaction, to the PageView endpoint.
/// \param pageView The <code>PageView</code> object that contains information related to a user’s interactions
/// e.g. the title of the page that was visited.
///
/// \param completionHandler A block that takes an optional <code>Error</code> which will be non-nil in the case of a failure.
///
- (void)sendPageViewEvent:(ZDKPageView * _Nonnull)pageView completionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
@end

@class ZDKZendeskUser;

@interface Zendesk (SWIFT_EXTENSION(ZendeskSDK))
/// Authenticate a user.
/// \param jwt The <code>jwt</code> belonging to the user.
///
/// \param completionHandler A block that takes an optional <code>ZendeskUser</code> which will be non-nil in the case of a success,
/// and an optional <code>Error</code> which will be non-nil in the case of a failure.
///
- (void)loginUserWith:(NSString * _Nonnull)jwt completionHandler:(void (^ _Nullable)(ZDKZendeskUser * _Nullable, NSError * _Nullable))completionHandler;
/// Unauthenticate a user.
/// \param completionHandler A block that takes an optional <code>Error</code> which will be non-nil in the case of a failure.
///
- (void)logoutUserWithCompletionHandler:(void (^ _Nullable)(NSError * _Nullable))completionHandler;
@end




SWIFT_CLASS_NAMED("ZendeskUser")
@interface ZDKZendeskUser : NSObject
/// The id of the <code>User</code>
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
/// The external id of the <code>User</code>
@property (nonatomic, readonly, copy) NSString * _Nonnull externalId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
