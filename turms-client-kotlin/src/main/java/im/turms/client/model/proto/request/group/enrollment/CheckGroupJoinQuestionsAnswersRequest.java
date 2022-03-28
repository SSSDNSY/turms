/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request/group/enrollment/check_group_join_questions_answers_request.proto

package im.turms.client.model.proto.request.group.enrollment;

/**
 * Protobuf type {@code im.turms.proto.CheckGroupJoinQuestionsAnswersRequest}
 */
public  final class CheckGroupJoinQuestionsAnswersRequest extends
    com.google.protobuf.GeneratedMessageLite<
        CheckGroupJoinQuestionsAnswersRequest, CheckGroupJoinQuestionsAnswersRequest.Builder> implements
    // @@protoc_insertion_point(message_implements:im.turms.proto.CheckGroupJoinQuestionsAnswersRequest)
    CheckGroupJoinQuestionsAnswersRequestOrBuilder {
  private CheckGroupJoinQuestionsAnswersRequest() {
  }
  public static final int QUESTION_ID_AND_ANSWER_FIELD_NUMBER = 1;
  private static final class QuestionIdAndAnswerDefaultEntryHolder {
    static final com.google.protobuf.MapEntryLite<
        java.lang.Long, java.lang.String> defaultEntry =
            com.google.protobuf.MapEntryLite
            .<java.lang.Long, java.lang.String>newDefaultInstance(
                com.google.protobuf.WireFormat.FieldType.INT64,
                0L,
                com.google.protobuf.WireFormat.FieldType.STRING,
                "");
  }
  private com.google.protobuf.MapFieldLite<
      java.lang.Long, java.lang.String> questionIdAndAnswer_ =
          com.google.protobuf.MapFieldLite.emptyMapField();
  private com.google.protobuf.MapFieldLite<java.lang.Long, java.lang.String>
  internalGetQuestionIdAndAnswer() {
    return questionIdAndAnswer_;
  }
  private com.google.protobuf.MapFieldLite<java.lang.Long, java.lang.String>
  internalGetMutableQuestionIdAndAnswer() {
    if (!questionIdAndAnswer_.isMutable()) {
      questionIdAndAnswer_ = questionIdAndAnswer_.mutableCopy();
    }
    return questionIdAndAnswer_;
  }
  @java.lang.Override

  public int getQuestionIdAndAnswerCount() {
    return internalGetQuestionIdAndAnswer().size();
  }
  /**
   * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
   */
  @java.lang.Override

  public boolean containsQuestionIdAndAnswer(
      long key) {
    
    return internalGetQuestionIdAndAnswer().containsKey(key);
  }
  /**
   * Use {@link #getQuestionIdAndAnswerMap()} instead.
   */
  @java.lang.Override
  @java.lang.Deprecated
  public java.util.Map<java.lang.Long, java.lang.String> getQuestionIdAndAnswer() {
    return getQuestionIdAndAnswerMap();
  }
  /**
   * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
   */
  @java.lang.Override

  public java.util.Map<java.lang.Long, java.lang.String> getQuestionIdAndAnswerMap() {
    return java.util.Collections.unmodifiableMap(
        internalGetQuestionIdAndAnswer());
  }
  /**
   * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
   */
  @java.lang.Override

  public java.lang.String getQuestionIdAndAnswerOrDefault(
      long key,
      java.lang.String defaultValue) {
    
    java.util.Map<java.lang.Long, java.lang.String> map =
        internalGetQuestionIdAndAnswer();
    return map.containsKey(key) ? map.get(key) : defaultValue;
  }
  /**
   * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
   */
  @java.lang.Override

  public java.lang.String getQuestionIdAndAnswerOrThrow(
      long key) {
    
    java.util.Map<java.lang.Long, java.lang.String> map =
        internalGetQuestionIdAndAnswer();
    if (!map.containsKey(key)) {
      throw new java.lang.IllegalArgumentException();
    }
    return map.get(key);
  }
  /**
   * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
   */
  private java.util.Map<java.lang.Long, java.lang.String>
  getMutableQuestionIdAndAnswerMap() {
    return internalGetMutableQuestionIdAndAnswer();
  }

  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, data, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return parseDelimitedFrom(DEFAULT_INSTANCE, input, extensionRegistry);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input);
  }
  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageLite.parseFrom(
        DEFAULT_INSTANCE, input, extensionRegistry);
  }

  public static Builder newBuilder() {
    return (Builder) DEFAULT_INSTANCE.createBuilder();
  }
  public static Builder newBuilder(im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest prototype) {
    return (Builder) DEFAULT_INSTANCE.createBuilder(prototype);
  }

  /**
   * Protobuf type {@code im.turms.proto.CheckGroupJoinQuestionsAnswersRequest}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageLite.Builder<
        im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest, Builder> implements
      // @@protoc_insertion_point(builder_implements:im.turms.proto.CheckGroupJoinQuestionsAnswersRequest)
      im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequestOrBuilder {
    // Construct using im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest.newBuilder()
    private Builder() {
      super(DEFAULT_INSTANCE);
    }


    @java.lang.Override

    public int getQuestionIdAndAnswerCount() {
      return instance.getQuestionIdAndAnswerMap().size();
    }
    /**
     * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
     */
    @java.lang.Override

    public boolean containsQuestionIdAndAnswer(
        long key) {
      
      return instance.getQuestionIdAndAnswerMap().containsKey(key);
    }

    public Builder clearQuestionIdAndAnswer() {
      copyOnWrite();
      instance.getMutableQuestionIdAndAnswerMap().clear();
      return this;
    }
    /**
     * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
     */

    public Builder removeQuestionIdAndAnswer(
        long key) {
      
      copyOnWrite();
      instance.getMutableQuestionIdAndAnswerMap().remove(key);
      return this;
    }
    /**
     * Use {@link #getQuestionIdAndAnswerMap()} instead.
     */
    @java.lang.Override
    @java.lang.Deprecated
    public java.util.Map<java.lang.Long, java.lang.String> getQuestionIdAndAnswer() {
      return getQuestionIdAndAnswerMap();
    }
    /**
     * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
     */
    @java.lang.Override
    public java.util.Map<java.lang.Long, java.lang.String> getQuestionIdAndAnswerMap() {
      return java.util.Collections.unmodifiableMap(
          instance.getQuestionIdAndAnswerMap());
    }
    /**
     * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
     */
    @java.lang.Override

    public java.lang.String getQuestionIdAndAnswerOrDefault(
        long key,
        java.lang.String defaultValue) {
      
      java.util.Map<java.lang.Long, java.lang.String> map =
          instance.getQuestionIdAndAnswerMap();
      return map.containsKey(key) ? map.get(key) : defaultValue;
    }
    /**
     * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
     */
    @java.lang.Override

    public java.lang.String getQuestionIdAndAnswerOrThrow(
        long key) {
      
      java.util.Map<java.lang.Long, java.lang.String> map =
          instance.getQuestionIdAndAnswerMap();
      if (!map.containsKey(key)) {
        throw new java.lang.IllegalArgumentException();
      }
      return map.get(key);
    }
    /**
     * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
     */
    public Builder putQuestionIdAndAnswer(
        long key,
        java.lang.String value) {
      
      java.lang.Class<?> valueClass = value.getClass();
      copyOnWrite();
      instance.getMutableQuestionIdAndAnswerMap().put(key, value);
      return this;
    }
    /**
     * <code>map&lt;int64, string&gt; question_id_and_answer = 1;</code>
     */
    public Builder putAllQuestionIdAndAnswer(
        java.util.Map<java.lang.Long, java.lang.String> values) {
      copyOnWrite();
      instance.getMutableQuestionIdAndAnswerMap().putAll(values);
      return this;
    }

    // @@protoc_insertion_point(builder_scope:im.turms.proto.CheckGroupJoinQuestionsAnswersRequest)
  }
  @java.lang.Override
  @java.lang.SuppressWarnings({"unchecked", "fallthrough"})
  protected final java.lang.Object dynamicMethod(
      com.google.protobuf.GeneratedMessageLite.MethodToInvoke method,
      java.lang.Object arg0, java.lang.Object arg1) {
    switch (method) {
      case NEW_MUTABLE_INSTANCE: {
        return new im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest();
      }
      case NEW_BUILDER: {
        return new Builder();
      }
      case BUILD_MESSAGE_INFO: {
          java.lang.Object[] objects = new java.lang.Object[] {
            "questionIdAndAnswer_",
            QuestionIdAndAnswerDefaultEntryHolder.defaultEntry,
          };
          java.lang.String info =
              "\u0000\u0001\u0000\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u00012";
          return newMessageInfo(DEFAULT_INSTANCE, info, objects);
      }
      // fall through
      case GET_DEFAULT_INSTANCE: {
        return DEFAULT_INSTANCE;
      }
      case GET_PARSER: {
        com.google.protobuf.Parser<im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest> parser = PARSER;
        if (parser == null) {
          synchronized (im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest.class) {
            parser = PARSER;
            if (parser == null) {
              parser =
                  new DefaultInstanceBasedParser<im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest>(
                      DEFAULT_INSTANCE);
              PARSER = parser;
            }
          }
        }
        return parser;
    }
    case GET_MEMOIZED_IS_INITIALIZED: {
      return (byte) 1;
    }
    case SET_MEMOIZED_IS_INITIALIZED: {
      return null;
    }
    }
    throw new UnsupportedOperationException();
  }


  // @@protoc_insertion_point(class_scope:im.turms.proto.CheckGroupJoinQuestionsAnswersRequest)
  private static final im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest DEFAULT_INSTANCE;
  static {
    CheckGroupJoinQuestionsAnswersRequest defaultInstance = new CheckGroupJoinQuestionsAnswersRequest();
    // New instances are implicitly immutable so no need to make
    // immutable.
    DEFAULT_INSTANCE = defaultInstance;
    com.google.protobuf.GeneratedMessageLite.registerDefaultInstance(
      CheckGroupJoinQuestionsAnswersRequest.class, defaultInstance);
  }

  public static im.turms.client.model.proto.request.group.enrollment.CheckGroupJoinQuestionsAnswersRequest getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static volatile com.google.protobuf.Parser<CheckGroupJoinQuestionsAnswersRequest> PARSER;

  public static com.google.protobuf.Parser<CheckGroupJoinQuestionsAnswersRequest> parser() {
    return DEFAULT_INSTANCE.getParserForType();
  }
}
