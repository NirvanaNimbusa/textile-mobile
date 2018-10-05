import React from 'react'
import { NavigationScreenProps } from 'react-navigation'
import { connect } from 'react-redux'
import { ScrollView, ViewStyle } from 'react-native'

import { Photo } from '../Models/TextileTypes'
import { RootState, RootAction } from '../Redux/Types'

import ThreadDetailCard from '../SB/components/ThreadDetailCard'

import styles from 'Styles/ThreadSelector'

const CONTAINER: ViewStyle = {
  backgroundColor: '#FAFCFE'
}

interface StateProps {
  photo?: Photo
}

class ThreadSelector extends React.Component<StateProps & NavigationScreenProps<{}>> {

  static navigationOptions = {
    title: 'Photo'
  }

  onComment = () => {
    this.props.navigation.navigate('Comments')
  }

  onLikes = () => {
    this.props.navigation.navigate('LikesScreen')
  }

  render () {
    return (
      <ScrollView style={CONTAINER}>
      {this.props.photo &&
        <ThreadDetailCard
          photo={this.props.photo}
          onComment={this.onComment}
          onLikes={this.onLikes}
          recentCommentsCount={5}
          maxLinesPerComment={5}
        />
      }
      </ScrollView>
    )
  }
}

const mapStateToProps = (state: RootState): StateProps => {
  return {
    photo: state.photoViewing.viewingPhoto
  }
}

export default connect(mapStateToProps)(PhotoScreen)
